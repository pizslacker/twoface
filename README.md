# twoface

In C, `stdin` (Standard Input), `stdout` (Standard Output), and `stderr` (Standard Error) are just three separate pipelines connected to your terminal.

By default, both `stdout` and `stderr` print to your screen, which means they usually get mixed together.

We can exploit this to create a program that has an outward-facing "professional" personality (`stdout`), while its inner, panicked thoughts leak out through `stderr`.

Here is the code for our emotionally unstable echo program.

### THe Corporate Yes Man
Let's mute the panic. In Linux/macOS (and modern Windows command prompts), stderr is technically stream number `2`. We can redirect stream `2` into a black hole (`/dev/null`).
```bash
./twoface 2> /dev/null
```

### The Nervous Wreck
Let's flip it. `stdout` is stream number `1`. Let's mute the corporate interface and only listen to the panic.
```bash
./twoface 1> /dev/null
```

### The Therapist
Let's send the professional logs to a filing cabinet (a text file), and the panic attacks to a separate diary.
```bash
./twoface 1> corporate.txt 2> diary.txt
```
