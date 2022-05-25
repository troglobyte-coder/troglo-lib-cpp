if get_option('with_tests').enabled()
    gtest = dependency('gtest')

    test_exe = executable('dummy',
        'test_cases.cpp',
        dependencies : [gtest, trog_dep])

    test('Execute project tests', test_exe)
endif
