set_xmakever("2.7.5")
set_project("rpl")

set_arch("x64")
set_languages("cxx20")

add_requires("lz4")

target("replayparser")
    set_default(true)
    set_kind("binary")
    add_files("src/*.cpp")
    add_headerfiles("src/*.h")
    add_includedirs("src/")
    add_packages("lz4")

add_rules("plugin.vsxmake.autoupdate")