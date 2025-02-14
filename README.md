# cpp-file-io
CS-121 project to learn file input and output

### algorithm
```
main()
  create ifstream inFile
  create string currentLine
  create stringstream converter
  create int numOne
  create int numTwo
  create int sum
  create string text


  open the file "data.csv"

  while (getLine from file, store in currentLine)
    clear converter
    pass currentLine to converter
    pass items in converter to numOne, numTwo and text

    add numOne to numTwo and store in sum

    for (i gets 0; while i is less than sum; add one to i each time)
      print text

    end line
    
