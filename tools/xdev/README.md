# xdev

`xdev` is a command-line tool for building, running and developing XenevaOS.

The goal of `xdev` is to provide a single interface for common development tasks without depending on a specific operating system, compiler or IDE. Contributors should be able to work with the tools they are comfortable with while following the same development workflow.

As XenevaOS continues to grow, the build process also becomes more complex. Setting up compilers, assemblers, virtual machines and project resources manually can be time-consuming, especially for new contributors. `xdev` aims to simplify this process by bringing these tasks together under one command-line utility.

The project is designed to automate repetitive development tasks such as validating the development environment, building the operating system, launching virtual machines and managing project resources. Instead of maintaining different workflows for different platforms, `xdev` provides a consistent experience across supported systems.

The tool is written with portability in mind. It does not require a particular editor or development environment and is intended to work equally well with Visual Studio, VS Code, CLion, Vim or any other editor. Likewise, it is designed to support multiple compiler toolchains including GCC, Clang and MSVC whenever possible.

`xdev` is organized into small, independent modules. Commands such as `doctor`, `build`, `run` and `setup` are implemented separately, making the project easier to maintain and extend as new functionality is introduced.

The project is currently under active development and will continue to evolve alongside XenevaOS.
