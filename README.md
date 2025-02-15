# cpp-file-io
CS-121 project to learn file input and output

### algorithm
```
main()
  create ifstream inFile
  create string currentLine
  create stringstream converter
  create stringstream ss
  create two temporary stings sOne sTwo
  create int numOne
  create int numTwo
  create int sum
  create string text


  open the file "data.csv"

  while (getLine from file, store in currentLine)
    clear stringstreams
    pass currentLine to ss
    getline (ss input, send to sOne, comma delimiter)
    getline (ss input, send to sTwo, comma delimiter)
    getline (ss input, send to text)

    pass sOne to converter
    pass back to numOne to convert to int
    clear converter
    pass sTwo to converter
    pass back to numTwo to convert to int

    sum gets the sum of numOne and numTwo

    for (i gets 0; while i is less than sum; add one to i each time)
      print text

    end line
  close inFile
    
