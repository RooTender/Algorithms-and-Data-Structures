# Algorithms and Data Structures
C++/C program about Algorithms and Data Structures

## Why such a project?
Well... as a student I found it hard to analyze data structures and algorithms by watching only the content from YT or sites for geeks.
So I've decided to make a project that will contain all the algorithms that I had read about and merge them into one repository.<br/>
Now you can clone this repository and unpack it in for example Visual Studio, then start debugging.<br/>
I hope my code review comments would help you with figuring out what's going on there.

## What's implemented now?
Sorting algorithms:
- Selection Sort
- Bubble Sort
- Insertion Sort
- Merge Sort
- Quick Sort (NEW!) [<a href="https://youtu.be/MZaf_9IZCrc" target="_blank">Visualisation</a>]

## How can I inspect array values?
1. Run project
2. Choose 'Locals' window
3. Right click on **arr** pointer > Add Watch
4. Switch to 'Watch' window
5. Edit arr value. It should look like this: 'arr, *enteredArrayLength*'. The second parameter is a size of array (first value you've entered to this program).

Now everytime, if there some changes occurred to array, during the process, it should be highlighted in red color. So I suggest to debug on small ones. Otherwise you can get lost in the numbers...

:heavy_exclamation_mark: Remember! Watches will not be deleted after exiting the program. You have to do it **manually**.
