#pragma once

#include <string>

class RunCommand
{
public:
    // Executes the "run" command
    static int Run();

private:
    // Run targets
    static bool RunKernel();
    static bool RunISO();
    static bool RunImage();

    // Emulator backends
    static bool LaunchQEMU();
    static bool LaunchVirtualBox();

    // Utility helpers
    static bool CommandExists(const std::string& command);
    static int Execute(const std::string& command);

    // Console output
    static void PrintInfo(const std::string& message);
    static void PrintSuccess(const std::string& message);
    static void PrintError(const std::string& message);
};