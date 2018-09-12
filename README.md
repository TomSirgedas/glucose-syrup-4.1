glucose-syrup-4.1, Windows port
===============================

`Simp` works, but `Parallel` doesn't -- it doesn't output anything.
See this comment in `Main.cc`: `"I must admit I have to print the model of one thread... But which one? FIXME !!"`



--------

Directory overview:
==================
```
mtl/            Minisat Template Library
core/           A core version of the solver glucose (no main here)
simp/           An extended solver with simplification capabilities
parallel/       A multicore version of glucose
README
LICENSE
Changelog
```

To build:
=========

`Simp`: Set `simp` as the active project, and build/run

`Parallel`: Change `simp`'s Configuration type from `Application (.exe)` to `Static Library (.lib)`. Set `parallel` as the active project, and build/run

To run:
=======

`glucose --help`

`glucose in.dimacs out.txt`
