#pragma once

class HelpCommand
{
public:
    // Executes the "help" command
    static int Run();

private:
    // Individual help sections
    static void PrintHeader();
    static void PrintUsage();
    static void PrintCommands();
    static void PrintExamples();
    static void PrintFooter();
};