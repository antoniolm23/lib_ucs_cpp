project('libucs', 'cpp',
  license : 'Apache',
  version         : run_command(find_program('scripts/version.sh')).stdout().strip(),
  default_options : ['warning_level=3', 'c_std=c11', 'cpp_std=c++14', 'b_colorout=always'])

inc = include_directories('include')

subdir('include')
subdir('src')
subdir('test')

pkg_mod = import('pkgconfig')
pkg_mod.generate(libraries : libucs,
                 version : '1.0',
                 name : 'libucs',
                 filebase : 'libucs',
                 description : 'A Library for implementing an usage control system.')
