catch2_dep = dependency('catch2', version : '>=2.9.2')
boost_dep = dependency('boost', modules : ['thread'])
spdlog_dep = dependency('spdlog', fallback : ['spdlog', 'spdlog_dep'])

deps = [spdlog_dep, boost_dep, catch2_dep]

testlibucs = executable('testlibucs', 'TestLibucs.cpp',
                    include_directories : inc,
                    dependencies : deps,
                    link_with : libucs)
test('testlibucs', testlibucs)
