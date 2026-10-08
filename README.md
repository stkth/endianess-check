# endianess-check

A unsophisticated approach of endianess determination on a system

## Build the program

Build the program with the following command in a release setup:

```
cmake -DCMAKE_BUILD_TYPE=Release -B build-release/
```

Alternatively as debug build:

```
cmake -DCMAKE_BUILD_TYPE=Debug  -B build-debug/
```

## Run

```
./endianess-check
```

## C23

The project setup enforces C23 ruleset.

## Additional resources

- [cmake](https://cmake.org/cmake/help/latest/guide/tutorial/index.html)
- [gitlint](https://joe.gl/ombek/blog/pr-gitlint/)
- [clang-format](https://clang.llvm.org/docs/ClangFormat.html)
