<a href="examples/HelloWorld.cys"><img align="center" width="100%" alt="Hello World!" src="img/hello-world.png"></a>

<p align="center">
    <a href="https://github.com/PryosCode/Cinyras/releases"><img src="https://img.shields.io/github/downloads/PryosCode/Cinyras/total?label=Downloads" alt="Downloads"></a>
    <a href="https://github.com/PryosCode/Cinyras/blob/master/LICENSE"><img src="https://img.shields.io/github/license/PryosCode/Cinyras?label=License" alt="License"></a>
    <a href="https://discord.gg/bF2GRHq"><img src="https://discordapp.com/api/guilds/350302354639290379/widget.png" alt="Discord"></a>
</p>

# Cinyras

Cinyras is a [high level](https://en.wikipedia.org/wiki/High-level_programming_language) [general purpose](https://en.wikipedia.org/wiki/General-purpose_programming_language) [interpreted](https://en.wikipedia.org/wiki/Interpreted_language) [scripting](https://en.wikipedia.org/wiki/Scripting_language) language with its own [interpreter](https://en.wikipedia.org/wiki/Interpreter_(computing)) written in [Rust](https://github.com/rust-lang/rust).

_The interpreter is not production ready and is mainly intended for testing algorithms or other small programs. It could easily break your code in a future update._

1. [Installation](#installation)
2. [How to use](#how-to-use)
3. [Comparison](#comparison)
4. [Dependencies](#dependencies)
5. [License](#license)

## Installation

_Doesn't actually work yet._

### Arch
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
curl https://github.com/PryosCode/Cinyras/releases/download/v0.0.1/cinyras.exe
setx path "%path%;%localappdata%\Cinyras\"
```

## How to use

_Coming Soon_

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
int main() {
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

_Coming Soon_

## License

[Apache License 2.0](LICENSE)