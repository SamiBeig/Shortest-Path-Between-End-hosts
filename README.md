# Shortest-Path-Between-End-hosts

Using GENI (a cloud testbed), I was able to allocate resources from different sites in order to set up a connection with 6 end-hosts. Pinging each connection allowed for me to access the costs between each end host. I uploaded those costs into my Bellman-Ford algorithm (implemented in C++), and returned the shortest path from the Bellman-Ford node to other end hosts. 

Attached is also a user interface shell script, which will allow for a user to type whatever end host they wish to go to right after running the script. 
Ex: ./interface.sh hopper
(This will output what a user needs to type in order to find the distance between the current host and the desired end host).

This project was used for my Networking course in college, and helped me visualize how distance vector and linked state algorithms worked, especially in a networking environment!
