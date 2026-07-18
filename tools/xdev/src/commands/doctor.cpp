#include "commands/doctor.hpp"

#include <cstdlib>
#include <iostream>
#include <string>

int DoctorCommand::Run()
{
    std::cout << "Checking development environment...\n\n";

    CheckCompiler();
    CheckCMake();
    CheckNASM();
    CheckPython();
    CheckQEMU();
    CheckGit();

    std::cout << "\nReady." << std::endl;

    return 0;
}

bool DoctorCommand::CheckCompiler()
{
    // TODO: Detect GCC/Clang/MSVC.

    PrintStatus("Compiler", true, "Placeholder");
    return true;
}

bool DoctorCommand::CheckCMake()
{
    // TODO: Detect CMake installation.

    PrintStatus("CMake", true, "Placeholder");
    return true;
}

bool DoctorCommand::CheckNASM()
{
    // TODO: Detect NASM.

    PrintStatus("NASM", true, "Placeholder");
    return true;
}

bool DoctorCommand::CheckPython()
{
    // TODO: Detect Python.

    PrintStatus("Python", true, "Placeholder");
    return true;
}

bool DoctorCommand::CheckQEMU()
{
    // TODO: Detect QEMU.

    PrintStatus("QEMU", true, "Placeholder");
    return true;
}

bool DoctorCommand::CheckGit()
{
    // TODO: Detect Git.

    PrintStatus("Git", true, "Placeholder");
    return true;
}

bool DoctorCommand::CommandExists(const std::string& command)
{
    return std::system(command.c_str()) == 0;
}

void DoctorCommand::PrintStatus(
    const std::string& component,
    bool available,
    const std::string& version)
{
    std::cout << (available ? "[ OK ] " : "[FAIL] ")
              << component;

    if (!version.empty())
        std::cout << ": " << version;

    std::cout << std::endl;
}