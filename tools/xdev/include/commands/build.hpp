#pragma once

#include <string>

class BuildCommand
{
public:
    // Executes the "build" command
    static int Run();

private:
    // Build targets
    static bool BuildKernel();
    static bool BuildBootloader();
    static bool BuildModules();
    static bool BuildISO();

    // Utility functions
    static bool ExecuteBuild(const std::string& command);
    static int Execute(const std::string& command);

    // Console output
    static void PrintInfo(const std::string& message);
    static void PrintSuccess(const std::string& message);
    static void PrintError(const std::string& message);
};