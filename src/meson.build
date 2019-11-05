boost_dep = dependency('boost')
spdlog_dep = dependency('spdlog', fallback : ['spdlog', 'spdlog_dep'])
libucs_sources = ['ucs/DummyComponent.cpp', 
'ucs/utility/uuid.cpp', 
'ucs/sessionmanager/Session.cpp', 
'ucs/sessionmanager/SessionInfo.cpp',
'ucs/sessionmanager/SessionQuery.cpp',
'ucs/message/Message.cpp',
'ucs/message/ResponseMessage.cpp',
'ucs/message/TryAccessMessage.cpp',
'ucs/message/StartAccessMessage.cpp',
'ucs/message/EndAccessMessage.cpp',
'ucs/message/AttributeChangedMessage.cpp',
'ucs/data/policy/Expression.cpp', 
'ucs/utility/utility.cpp', 
'ucs/data/policy/Expression.cpp',
'ucs/data/policy/Rule.cpp',
'ucs/data/policy/Instruction.cpp',
'ucs/data/EvaluationResult.cpp'
]

deps = [spdlog_dep, boost_dep]

#if get_option('shared_lib')
    libucs = shared_library('ucs',
                    libucs_sources,
                    include_directories : inc,
                    dependencies : deps,
                    install : true)
#else
#    libucs = static_library('ucs',
#                    libucs_sources,
#                    include_directories : inc,
#                    dependencies : deps,
#                    install : true)
#endif

libucs_dep = declare_dependency(
                    include_directories : inc,
                    dependencies : deps,
                    link_with : libucs)
