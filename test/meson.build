if get_option('with_tests').enabled()
    unity = dependency('unity')

    test_exe = executable('dummy',
        'test_cases.cpp',
        dependencies : [unity, hak_dep])

    test('Execute project tests', test_exe)
endif
