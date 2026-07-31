{
    depfiles_format = "gcc",
    depfiles = "main.o: src/main.c src/../vendor/raylib/raylib.h  src/../vendor/raylib/raygui.h src/../vendor/raylib/raylib.h\
",
    values = {
        "/usr/bin/gcc",
        {
            "-m64",
            "-g",
            "-O0",
            "-std=c11",
            "-Isrc",
            "-Ivendor"
        }
    },
    files = {
        "src/main.c"
    }
}