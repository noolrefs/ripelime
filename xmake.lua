--- RULES/POLICIES
add_rules("mode.debug", "mode.release"); set_defaultmode("debug")
add_rules("plugin.compile_commands.autoupdate")

--- GLOBAL
set_languages("c17")
add_includedirs("src/", "vendor/")

--- TARGETS
target("ripelime")
    add_files("src/*.c")
    add_ldflags("-lraylib")
