#include "pch.h"
#include "vcpkg_Commands.h"

namespace vcpkg::Commands
{
    const std::vector<package_name_and_function<command_type_a>>& get_available_commands_type_a()
    {
        static std::vector<package_name_and_function<command_type_a>> t = {
            {"install", &Install::perform_and_exit},
            { "ci", &CI::perform_and_exit },
            {"remove", &Remove::perform_and_exit},
            {"build", &Build::perform_and_exit},
            {"build_external", &BuildExternal::perform_and_exit}
        };
        return t;
    }

    const std::vector<package_name_and_function<command_type_b>>& get_available_commands_type_b()
    {
        static std::vector<package_name_and_function<command_type_b>> t = {
            {"/?", &Help::perform_and_exit},
            {"help", &Help::perform_and_exit},
            {"search", &Search::perform_and_exit},
            {"list", &List::perform_and_exit},
            {"integrate", &Integrate::perform_and_exit},
            {"owns", &Owns::perform_and_exit},
            {"update", &Update::perform_and_exit},
            {"edit", &Edit::perform_and_exit},
            {"create", &Create::perform_and_exit},
            {"import", &Import::perform_and_exit},
            {"cache", &Cache::perform_and_exit},
            {"portsdiff", &PortsDiff::perform_and_exit}
        };
        return t;
    }

    const std::vector<package_name_and_function<command_type_c>>& get_available_commands_type_c()
    {
        static std::vector<package_name_and_function<command_type_c>> t = {
            {"version", &Version::perform_and_exit},
            {"contact", &Contact::perform_and_exit},
            {"hash", &Hash::perform_and_exit},
        };
        return t;
    }
}
