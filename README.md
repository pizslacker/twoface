# twoface

In C, `stdin` (Standard Input), `stdout` (Standard Output), and `stderr` (Standard Error) are just three separate pipelines connected to your terminal.

By default, both `stdout` and `stderr` print to your screen, which means they usually get mixed together. We can exploit this to create a program that has an outward-facing "professional" personality (`stdout`), while its inner, panicked thoughts leak out through `stderr`.

Here is the code for our emotionally unstable echo program.
