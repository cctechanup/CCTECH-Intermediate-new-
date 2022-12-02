#include <iostream>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

string removeWordSeprators(string file_Name);
string compareFilenameIndex(string path);
string removeDirectory(string path);
string removeExtension(string file_Name);
string removeWords(string file_Name);

int main()
{
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
    cout << "test cases passed!!" << endl;
    return 0;
}

string compareFilenameIndex(string path)
{
    transform(path.begin(), path.end(), path.begin(), ::tolower);
    string file_Name = removeDirectory(path);
    int index_1, index_2;
    index_1 = path.find(file_Name);
    index_2 = index_1 + file_Name.length();
    string indexs = "[" + to_string(index_1) + "," + to_string(index_2) + "]";
    return indexs;
}

string removeDirectory(string path)   
{ 
    int slash_Index = path.find_last_of("/\\");
    string file_Name = path.substr(slash_Index + 1);
    string remove_Name = removeWordSeprators(removeWords(removeExtension(file_Name)));

    return remove_Name;
}

string removeExtension(string file_Name)   
{
    int position = file_Name.find_last_of('.');
    return file_Name.substr(0, position);
}

string removeWords(string file_Name)  
{
    string eraseWords[] = { "tests","test","spec","steps","step" };
    for (string word : eraseWords)
    {
        int position = file_Name.find(word, 0);
        if (position != string::npos)
            file_Name.erase(position, word.length());
    }
    return file_Name;
}

string removeWordSeprators(string file_Name) 
{
    char separators[] = { '_','-','.' };
    for (char ch : separators)
    {
        auto t = remove(file_Name.begin(), file_Name.end(), ch);
        file_Name.erase(t, file_Name.end());
    }
    return file_Name;
}