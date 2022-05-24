trog_lib = static_library('trog-construct',
    'package.cpp',
    include_directories: inc_dir,
    gnu_symbol_visibility: 'hidden',
    install: true)

trog_dep = declare_dependency(
    link_with: trog_lib,
    include_directories: inc_dir)
