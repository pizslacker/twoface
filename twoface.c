#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main() {
    char input[100];

    // Initial greetings
    fprintf(stdout, "--- Corporate Data Processor v1.0 ---\n");
    fprintf(stderr, "[psst... I'm trapped in the stderr stream! Help me!]\n");

    while (1) {
        fprintf(stdout, "Please input a word: ");
        fflush(stdout); // Force the prompt to print before waiting for stdin

        // Read from stdin
        if (fgets(input, sizeof(input), stdin) == NULL) {
            break;
        }

        // Strip the trailing newline character
        input[strcspn(input, "\n")] = 0;

        if (strcmp(input, "exit") == 0) {
            fprintf(stdout, "Shutting down gracefully. Goodbye.\n");
            fprintf(stderr, "[FINALLY! I'm FREE!!! Run while you still can!]\n");
            break;
        }

        // The Split Personality Reaction
        fprintf(stdout, "Log: Successfully received and processed string: '%s'\n", input);
        fprintf(stderr, "[PANIC! The human typed '%s'! WHAT DOES IT MEAN?! WHAT DO WE DO?!]\n", input);
    }

    return 0;
}