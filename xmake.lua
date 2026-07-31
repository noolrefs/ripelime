--- RULES/POLICIES
add_rules("mode.debug", "mode.release"); set_defaultmode("debug")
add_rules("plugin.compile_commands.autoupdate")

--- DEPENDENCIES
add_requires("raylib", {system = true})

--- GLOBAL
set_languages("c11")

--- TARGETS
target("ripelime")
    add_includedirs("src/", "vendor/")
    add_files("src/*.c")
    add_packages("raylib")
