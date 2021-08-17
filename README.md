# Banking


### 1. Summarize the project and what problem it was solving.  
This program will take user input in the form of an initial deposit, a monthly recurring deposit, an interest rate and a term in years. From here it will           calculate the balance of the account every year as well as how much interest was earned in that year.

### 2. What did you do particularly well?

  I think the work in the vector of vectors was pretty good. I was able to manipulate a lot of data pretty easily in not a lot of code
  
  
  ```C++
for (int i = 1; i < vec.size(); i++){
        vec.at(i).at(0) = i + 1;
        vec.at(i).at(1) = vec.at(i - 1).at(5);
        vec.at(i).at(2) = t_mdeposit;
        vec.at(i).at(3) = vec.at(i - 1).at(5) + t_mdeposit;
        vec.at(i).at(4) = (vec.at(i - 1).at(5) + t_mdeposit) * ((t_rate/100)/12);
        vec.at(i).at(5) = (vec.at(i - 1).at(5) + t_mdeposit) + (vec.at(i - 1).at(1) + t_mdeposit)
                * ((t_rate/100)/12);
```

### 3.  Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?

  I could take this project to the next level and add a GUI. We could also add additional functionality, as now it stands it really doesn’t do much. Maybe we could   add different types of investment accounts, some graphics showing money earned etc. This wouldn’t really make it any more secure or efficient, but it would make     it better.  

### 4. Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?

  This was somewhat challenging in organizing all the different classes and headers into different files. This was the first time I had to do that from scratch, but    overall wasn’t really very difficult. 

### 5.  What skills from this project will be particularly transferable to other projects or course work?

  I think this was a great introduction into making a C++ program with multiple classes, inheritance etc. I can take lessons learned from here into other larger       projects in the future. 

### 6. How did you make this program maintainable, readable, and adaptable?

  I think separating the classes and adding comments helped to make this fairly readable. There isn’t really enough code here to need to worry too much about         maintainability. The way I set up the vectors with all the data would make it easily adaptable to do different things like I talked about above. 

