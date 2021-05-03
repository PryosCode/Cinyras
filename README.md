<a href="https://github.com/PryosCode/Cinyras"><img align="center" width="100%" alt="Cinyras" src="https://github.com/PryosCode/Cinyras/raw/master/img/logo.png"></a>

<p align="center">
    <a href="https://github.com/PryosCode/Cinyras/wiki/Installation"><img alt="Version" src="https://img.shields.io/github/v/release/PryosCode/Cinyras?label=Version"></a>
    <a href="https://github.com/PryosCode/Cinyras/actions"><img alt="Linux" src="https://github.com/PryosCode/Cinyras/actions/workflows/linux.yml/badge.svg"></a>
    <a href="https://github.com/PryosCode/Cinyras/actions"><img alt="Windows" src="https://github.com/PryosCode/Cinyras/actions/workflows/windows.yml/badge.svg"></a>
    <a href="https://github.com/PryosCode/Cinyras/actions"><img alt="MacOS" src="https://github.com/PryosCode/Cinyras/actions/workflows/macos.yml/badge.svg"></a>
    <a href="https://github.com/PryosCode/Cinyras/blob/master/LICENSE"><img alt="License" src="https://img.shields.io/github/license/PryosCode/Cinyras?label=License"></a>
</p>

# Cinyras

Cinyras is a [high level](https://en.wikipedia.org/wiki/High-level_programming_language) [general purpose](https://en.wikipedia.org/wiki/General-purpose_programming_language) [interpreted](https://en.wikipedia.org/wiki/Interpreted_language) [scripting](https://en.wikipedia.org/wiki/Scripting_language) language with its own [interpreter](<https://en.wikipedia.org/wiki/Interpreter_(computing)>).

_The interpreter is not production ready and is mainly intended for small programs. Updates could easily break your code._

## Installation

[Wiki](https://github.com/PryosCode/Cinyras/wiki/Installation)

## Test Installation

```bash
$ cinyras https://git.io/J336G
Hello World!
```

## How to use

```
USAGE:
    cinyras [FLAGS] <FILE> [ARGS]...

FLAGS:
    -h, --help      Prints help information
    -V, --version   Prints version information
    -v, --verbose   Use verbose output

ARGS:
    <FILE>      Sets the input file to use
    <ARGS>...   Arguments passed to script
```

## Comparison

### Cinyras

```
void main(str[] args) {
    print("Hello World!");
}
```

### C++

```cpp
#include <iostream>
int main(int argc, char *argv[]) {
    std::cout << "Hello World!" << std::endl;
    return 0;
}
```

### Java

```java
public class Main {
    public static void main(String[] args) {
        System.out.println("Hello World!");
    }
}
```

## License

[Apache License 2.0](LICENSE)