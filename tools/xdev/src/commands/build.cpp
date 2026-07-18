#include "commands/build.hpp"

#include <cstdlib>
#include <iostream>

int BuildCommand::Run()
{
    PrintInfo("Starting Xeneva build...\n");

    if (!BuildKernel())
        return 1;

    if (!BuildBootloader())
        return 1;

    if (!BuildModules())
        return 1;

    if (!BuildISO())
        return 1;

    PrintSuccess("Build completed successfully.");

    return 0;
}

bool BuildCommand::BuildKernel()
{
    PrintInfo("Building kernel...");

    // TODO: Invoke the kernel build system.
    // Example:
    // return ExecuteBuild("cmake --build build/kernel");

    PrintSuccess("Kernel build placeholder completed.");
    return true;
}

bool BuildCommand::BuildBootloader()
{
    PrintInfo("Building bootloader...");

    // TODO: Build the Xeneva bootloader.

    PrintSuccess("Bootloader build placeholder completed.");
    return true;
}

bool BuildCommand::BuildModules()
{
    PrintInfo("Building modules...");

    // TODO: Build kernel modules and drivers.

    PrintSuccess("Module build placeholder completed.");
    return true;
}

bool BuildCommand::BuildISO()
{
    PrintInfo("Creating bootable ISO...");

    // TODO: Generate the final ISO image.

    PrintSuccess("ISO generation placeholder completed.");
    return true;
}

bool BuildCommand::ExecuteBuild(const std::string& command)
{
    return Execute(command) == 0;
}

int BuildCommand::Execute(const std::string& command)
{
    return std::system(command.c_str());
}

void BuildCommand::PrintInfo(const std::string& message)
{
    std::cout << "[INFO] " << message << std::endl;
}

void BuildCommand::PrintSuccess(const std::string& message)
{
    std::cout << "[ OK ] " << message << std::endl;
}

void BuildCommand::PrintError(const std::string& message)
{
    std::cerr << "[FAIL] " << message << std::endl;
}