This repository include some source code in my seed project practice.

The objective of the SEED project is to develop an instructional
laboratory environment and laboratory exercises(called SEED labs) for
computer system security education

To get more information about seed project, you can visit [here](http://www.cis.syr.edu/~wedu/seed)


===============================

####Buffer Overflow Vulnerability Lab
Buffer overflow is defined as the condition in which a program attempts to write
data beyond the boundaries of pre-allocated fixed length buffers. This
vulnerability can be utilized by a malicious user to alter the flow control of
the program, even execute arbitrary pieces of code. 

####Return-to-libc Attack Lab
Return-to-libc attack is a type of buffer overflow attack, and it is generally
used by attackers if the targetted system has a non-execute stack. The attack
involves replacing the return address on the stack with the address of another
function(one of the libc functions in this case) and modifying other approriate
portions of the stack to proide arguments to the function.

####Format-String Vulnerability Lab
The format-string vul- nerability is caused by code like `printf(user input)`, where the contents of variable of `user_input` is provided by users. When this program is running with privileges (e.g., Set-UID program), this printf statement can lead to one of the following:

1. crash the program.
2. read from an arbitrary memory place.
3. modify the values of in an arbitrary memory place.
