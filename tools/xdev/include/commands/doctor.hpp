#pragma once

#include <string>

class DoctorCommand
{
public:
    // Executes the "doctor" command
    static int Run();

private:
    // Individual dependency checks
    static bool CheckCompiler();
    static bool CheckCMake();
    static bool CheckNASM();
    static bool CheckPython();
    static bool CheckQEMU();
    static bool CheckGit();

    // Utility function to execute a command
    static bool CommandExists(const std::string& command);

    // Print formatted status
    static void PrintStatus(
        const std::string& component,
        bool available,
        const std::string& version = ""
    );
};