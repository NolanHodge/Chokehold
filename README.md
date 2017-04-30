# Chokehold

**DISCLAIMER:**

This program is to be used on your own server, and your own network! 
This software was not created for malicous intent or use. 
The creaters of this software omit any responsibility for misuse.

#To Build
$ make
#To Run
$ ./chokehold

# Apache server tree

| /index.html  
| /test_1.pdf (indexed)  
| /test_2.pdf (hidden)  
|  
| ------------ hidden/ (hidden)  
| --------------------test_2.pdf (hidden)  
|  


# Current Task  
**Grab all pdf files from server**  
wget's recursive grab of all pdfs only grabs files that the server has listed in its index, currently we only grab test_1.pdf since a hyperlink is available for the document and it is listed.

The goal is create a command that will grab test2.pdf and the hidden/ subdirectory as well as its contents.

(Note it is possible to do a 'wget localhost:9999/hidden/test_2.pdf' to grab the document, but we want to grab all hidden files without explicitly telling the command)

**Task Status: ** 

Currently brute forcing the search using /etc/dictionaries-common/words dictionary file.
The algorithm was able to find the hidden directory in under 5 minutes.

**Output**
*
time ./chokehold
------------------------------
Chokehold
------------------------------
Options
(1) Get all listed files
(2) Search for unlisted directories

Enter Option: 2
Enter dictionary location: /etc/dictionaries-common/words
Found directory: hidden

real	4m0.058s
user	0m2.212s
sys	0m7.416s
*
