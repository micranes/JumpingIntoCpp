# Chapter 7 - Jumping into C++

## My first Markdown file.
Wanted a place besides the source code file to make notes on things. On a these small programs it probably doesn't matter much, but I want to instill good habits. So I will try and use this often.

## Proper etiquette for this file
I don't know anything about md files beyond a quick brief from Grok. So I will learn as I go along.

## Probrem one. 
1. Implement the source code that turns numbers into English text for numbers between -2 billion
and 2 billion.

Now anyone reading this will wonder why I am creating so much documentation about such a simple program. The reason is to learn about the best ways to document programs. I would like to use best practices from the start. I do have a clue on how even a simple program can look like gibberish to one two days after you wrote it. So I want to attempt to nip that in the bud right away.

## Mon Jun 23 12:04:26 PM CDT 2025
So I am getting ready to re write my program once more. I just realized that (I think) I need to give more thought about how the initial digits are broken down and handed into the functions. I had some functions that are accepting ints and some accepting string versions of various pieces of the overall number. I am realizing that this process needs more thought before just jumping in and coding.

After getting a ways into coding I realized that I need :
1. A function that handles everything from 1 to 99.
    I had this split into two functions before, 1-19, and 20-99. But I found it is too easy in the mix of reusing things to write functions for the hundreds up that operate inconsistently for various reasons. So that 1 to 99 function needs to be solid and no calling the functions it uses from outside of it. everything needs to go thru it.

## Mon Jun 23 01:32:57 PM CDT 2025
1 - 999 done finally. And in a way I am happy with. Not that it is the best way. I don't know enough yet to know what the best way is. But it is way better than it was at the beginning of the day and a lot less confusing.
    