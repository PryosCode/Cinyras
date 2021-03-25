<a href="examples/HelloWorld.cys"><img align="center" width="100%" alt="Hello World!" src="img/hello-world.png"></a>

<p align="center">
    <a href="https://github.com/PryosCode/Cinyras/releases"><img alt="Downloads" src="https://img.shields.io/github/downloads/PryosCode/Cinyras/total?label=Downloads"></a>
    <a href="https://hub.docker.com/r/pryoscode/cinyras"><img alt="Pulls" src="https://img.shields.io/docker/pulls/pryoscode/cinyras?label=Pulls"></a>
    <a href="https://github.com/PryosCode/Cinyras/releases"><img alt="Build" src="https://github.com/PryosCode/Cinyras/actions/workflows/cargo.yml/badge.svg"></a>
    <a href="https://github.com/PryosCode/Cinyras/blob/master/LICENSE"><img alt="License" src="https://img.shields.io/github/license/PryosCode/Cinyras?label=License"></a>
    <a href="https://discord.gg/bF2GRHq"><img alt="Discord" src="https://discord.com/api/guilds/350302354639290379/widget.png"></a>
</p>

# Cinyras

Cinyras is a [high level](https://en.wikipedia.org/wiki/High-level_programming_language) [general purpose](https://en.wikipedia.org/wiki/General-purpose_programming_language) [interpreted](https://en.wikipedia.org/wiki/Interpreted_language) [scripting](https://en.wikipedia.org/wiki/Scripting_language) language with its own [interpreter](https://en.wikipedia.org/wiki/Interpreter_(computing)) written in [Rust](https://github.com/rust-lang/rust).

_The interpreter is not production ready and is mainly intended for testing algorithms or other small programs. It could easily break your code in a future update._

1. [Installation](#installation)
   - [Snap Store](#snap-store)
   - [Flathub](#flathub)
   - [Arch Linux](#arch-linux)
   - [Windows](#windows)
2. [Download](#download)
   - [Release](#release)
   - [Docker](#docker)
2. [Test Installation](#test-installation)
   - [Input](#input)
   - [Output](#output)
3. [How to use](#how-to-use)
4. [Comparison](#comparison)
   - [Cinyras](#cinyras-1)
   - [C++](#c)
   - [Java](#java)
5. [Dependencies](#dependencies)
6. [License](#license)

## Installation

_Doesn't actually work yet._

### Snap Store
_Coming Soon._

### Flathub
_Coming Soon._

### Arch Linux
```bash
pacman -S --needed git base-devel
git clone https://github.com/PryosCode/Cinyras.git
cd Cinyras
makepkg -si
```

### Windows
```batch
cd %localappdata%
mkdir Cinyras
cd Cinyras
curl -o cinyras.exe https://github.com/PryosCode/Cinyras/releases/download/v0.0.1/Cinyras.exe
setx path "%path%;%localappdata%\\Cinyras\\"
```

## Download

### Release
[Download](https://github.com/PryosCode/Cinyras/releases)

### Docker
```bash
docker run -ti pryoscode/cinyras [FLAGS] <FILE> [ARGS]...
```

## Test Installation

### Input
```bash
cinyras https://github.com/PryosCode/Cinyras/raw/master/examples/HelloWorld.cys
```

### Output
```
Hello World!
```

## How to use

```
USAGE:
    cinyras [FLAGS] <FILE> [ARGS]...

FLAGS:
    -h, --help       Prints help information
    -V, --version    Prints version information
    -v, --verbose    Use verbose output

ARGS:
    <FILE>       Sets the input file to use
    <ARGS>...    Arguments passed to script
```

## Comparison

### Cinyras
```
void main(str[] args) {
    println("Hello World!");
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

## Dependencies

- [clap](https://crates.io/crates/clap/2.33.3)
- [Inflector](https://crates.io/crates/Inflector/0.11.4)
- [reqwest](https://crates.io/crates/reqwest/0.11.0)

## License

[Apache License 2.0](LICENSE)