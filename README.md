# Chokehold

**DISCLAIMER:**

This program is to be used on your own server, and your own network! 
This software was not created for malicous intent or use. 
The creaters of this software omit any responsibility for misuse.

# Apache server tree

| /index.html  
| /test_1.pdf (indexed)  
| /test_2.pdf (hidden)  
|  
| ------------ hidden/ (hidden)  
| --------------------hidden/test_2.pdf (hidden)  
|  


# Current Task
**Grab all pdf files from server**
wget's recursive grab of all pdfs only grabs files that the server has listed in its index, currently we only grab test_1.pdf since a hyperlink is available for the document and it is listed.

The goal is create a command that will grab test2.pdf and the hidden/ subdirectory as well as its contents.



