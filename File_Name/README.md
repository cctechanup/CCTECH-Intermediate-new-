##### Test Strategy#####

1. Remove extension from the filename or path
2. Remove word separators from the file name.
3. Remove special kind of words from the filename



###### TestCases#####

    assert(compareFilenameIndex("src/Hiker_spec.re") == "[4,9]");
    assert(compareFilenameIndex("test/hiker_test.exs") == "[5,10]");
    assert(compareFilenameIndex("wibble/test/hiker_spec.rb") == "[12,17]");
    assert(compareFilenameIndex("hiker_steps.rb") == "[0,5]");
    assert(compareFilenameIndex("hiker_spec.rb") == "[0,5]");
    assert(compareFilenameIndex("test_hiker.rb") == "[5,10]");
    assert(compareFilenameIndex("test_hiker.py") == "[5,10]");
    assert(compareFilenameIndex("test_hiker.sh") == "[5,10]");
    assert(compareFilenameIndex("tests_hiker.sh") == "[6,11]");
    assert(compareFilenameIndex("test_hiker.coffee") == "[5,10]");
    assert(compareFilenameIndex("hiker_spec.coffee") == "[0,5]");
    assert(compareFilenameIndex("hikerTest.chpl") == "[0,5]");
    assert(compareFilenameIndex("hiker.tests.c") == "[0,5]");
    assert(compareFilenameIndex("hiker_tests.c") == "[0,5]");
    assert(compareFilenameIndex("hiker_test.c") == "[0,5]");
    assert(compareFilenameIndex("hiker_Test.c") == "[0,5]");
    assert(compareFilenameIndex("HikerTests.cpp") == "[0,5]");
    assert(compareFilenameIndex("hikerTests.cpp") == "[0,5]");
    assert(compareFilenameIndex("HikerTest.cs") == "[0,5]");
    assert(compareFilenameIndex("HikerTest.java") == "[0,5]");
    assert(compareFilenameIndex("DiamondTest.kt") == "[0,7]");
    assert(compareFilenameIndex("HikerTest.php") == "[0,5]");
    assert(compareFilenameIndex("hikerTest.js") == "[0,5]");
    assert(compareFilenameIndex("hiker-test.js") == "[0,5]");
    assert(compareFilenameIndex("hiker-spec.js") == "[0,5]");
    assert(compareFilenameIndex("hiker.test.js") == "[0,5]");
    assert(compareFilenameIndex("hiker.tests.ts") == "[0,5]");
    assert(compareFilenameIndex("hiker_tests.erl") == "[0,5]");
    assert(compareFilenameIndex("hiker_test.clj") == "[0,5]");
    assert(compareFilenameIndex("fizzBuzz_test.d") == "[0,8]");
    assert(compareFilenameIndex("hiker_test.go") == "[0,5]");
    assert(compareFilenameIndex("hiker.tests.R") == "[0,5]");
    assert(compareFilenameIndex("hikertests.swift") == "[0,5]");
    assert(compareFilenameIndex("HikerSpec.groovy") == "[0,5]");
    assert(compareFilenameIndex("hikerSpec.feature") == "[0,5]");
    assert(compareFilenameIndex("hiker.feature") == "[0,5]");
    assert(compareFilenameIndex("hiker.fun") == "[0,5]");
    assert(compareFilenameIndex("hiker.t") == "[0,5]");
    assert(compareFilenameIndex("hiker.plt") == "[0,5]");
    assert(compareFilenameIndex("hiker") == "[0,5]");



