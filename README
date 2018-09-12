** glucose-syrup-4.1, Windows port **



`Simp` works, but `Parallel` doesn't -- it doesn't output anything.
See this comment in `Main.cc`: `"I must admit I have to print the model of one thread... But which one? FIXME !!"`

--------

Directory overview:
==================

mtl/            Minisat Template Library
core/           A core version of the solver glucose (no main here)
simp/           An extended solver with simplification capabilities
parallel/       A multicore version of glucose
README
LICENSE
Changelog

To build (release version: without assertions, statically linked, etc):
======================================================================
Like minisat....

cd { simp | parallel }
make rs

Usage:
======

in simp directory:      ./glucose --help

in parallel directory:  ./glucose-syrup --help
