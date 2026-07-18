#pragma once

class SetupCommand
{
public:
    // Executes the "setup" command
    static int Run();

private:
    // Individual setup steps
    static bool InstallCompiler();
    static bool InstallNASM();
    static bool InstallPython();
    static bool InstallQEMU();

    // Helper utilities
    static bool IsWindows();
    static bool IsLinux();
    static bool IsMacOS();

    static void PrintStep(const char* message);
    static void PrintSuccess(const char* message);
    static void PrintError(const char* message);
};