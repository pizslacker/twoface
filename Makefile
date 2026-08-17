twoface: twoface.c
	gcc -Wall -Wextra -O3 -o twoface twoface.c
	strip twoface

clean:
	rm -f twoface
