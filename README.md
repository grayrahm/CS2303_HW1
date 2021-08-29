[HWWordSearch.pdf](https://github.com/grayrahm/CS2303_HW1/files/7072978/HWWordSearch.pdf)
# CS2303_HW1

Homework Word Search
array of char, string

Abstract
The objective is to give you practice with characters, pointers to characters and strings.
The context of this problem is playing “Word Search”. See Figure 1.
Be sure to construct test cases for each function you build. Put thought into
the test cases. The goal is to know that a function works, when it passes all
of its test cases. One test case per function is usually not enough, because a
function returns something, and if the test looks only for that something, it will
pass.
• Construct a sequence diagram for your project. Recall that sequence diagrams do not include test. You can draw it by hand and include a
phone/photo, or draw it with a software tool.
Here is an example sequence diagram (see Figure 2). You can use it,
or prepare your own. In future homeworks, you will need to prepare
your own. Future homeworks will have more entities that just the one
“Program”, because you will apply divide-and-conquer in your solution.
• Use the test-driven development style for developing your code. Each test
function should have console output saying whether its test cases were
failed or passed. Document this on a function by function basis.
We can infer from our example sequence diagram that we will need a test
for length determination and one for substring extraction.
First the production function exists as a stub. Your test code will invoke
this function, usually with multiple test cases, and a good test will be
able to notice that the stub function is inadequate to pass all of the test
cases. Take a screen shot of your production code function being tested
in its manifestation as a stub, including the console showing that the
test function fails. (See Figure 1 in HW2 .). This is called the “before”
screen shot. After your production function has been developed sufficiently
to pass all of the test cases, take another screenshot. (See Figure 2 in
HW2.) It is called the “after” screenshot. It should include the developed
production code being tested and the console message about passing thetest. Depending upon how many functions are in your sequence diagram,
there could be a large number of screen shots.
Be sure to run your code every time you add a few lines of test or production code. Do not allow the number of errors to get large.
• Read from the command line a string which will searched for words. See
Figure 3.
• Recall from inClassExercises that a string is a sequence of characters,
stored starting at an address (whose type is char*) and ending with a 0.
• Getting started: Declare an array of characters whose size will be one
more than the length of the largest input word your program will handle,
for example “Supercalifragilistickexpialidocious”. One adequate size is 20.
• You might want to test whether the length of the input string is zero.
Humans can be untrustworthy about input.
• Copy the string from the input into your working array. You could use
strcpy or strncpy.
• Consider the possible lengths of substrings, such as, from 1 to just below
the length of your input string. You could use strlen.
• Find, and print out, each substring of length 1, then of length 2, then of
length 3, and so on. For example, a three letter word has three substrings
of length 1, and two substrings of length 2.
• Each time the code prints out a substring, of whatever length, it should
ask the human user whether that substring constitutes a word. Count up
the number of words that are found.
• Print out, at the end of the process, the number of words that were found.
• Print out the breakdown of words found for each length (for example,
three words of length 2, and one word of length 5.) It is ok to include
lines reporting zero words. If you prefer, you can suppress reports of zero
words of a certain length, when none were found.


Things to do:
1. Either:
(a) Make a C project from the Hello,World project.
(b) Populate that project with tests.c, tests.h, production.c and production .h.
or use starter code.
Here is an image of the starter code running (See Figure 4):
2. Create the sequence diagram and include the electronic file (diagram,
screenshot or photo). Make sure your name appears within the sequence
diagram.
3. For each entity in your sequence diagram, create a .c and .h pair of files.
4. Make sure every .c file includes its corresponding .h file.
5. Place function prototypes for all of your functions from the sequence diagram into appropriate .h files.
6. For every function prototype from the seqence diagram/production code,
invoke a test function in tests().
7. For every test function, also create a prototype (in tests.h) and function
definition (in tests.c).
8. Recall that each test function must invoke the function it is testing, and
must report failure or success in the console.
9. As you work on the assignment, collect a sequence of screen shots showing
how you have tested your production code. As always, these are pictures of
production (not test) code and console output saying whether this function
failed or passed its test.
10. Be sure to build and run often; do not allow errors to build up.


