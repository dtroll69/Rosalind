//
//  main.cpp
//  Rosalind
//
//  Created by Darren Alleyne on 2/10/18.
//  Copyright © 2018 Darren Alleyne. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

#define STRSIZ 100

int getFilePath(char fileLocation[STRSIZ]){
    // Get and open file with problem dataset
    ifstream inFile;
    printf("%s \n", fileLocation);
    inFile.open(fileLocation);
    if (!inFile) {
        printf("Unable to open file %s!", fileLocation);
        exit(1);   // call system to stop
    }
    inFile.close();
    
    return (0);
}

int determineAlgorithm(char filePath){
    // Use the filepath to determine with algorithm to run.
    // Rosalind defaults to a 'rosalind_xxxx.txt filename pattern.
    // xxxx can be a 3 or 4 character identifier (algorithmID)
    // which will be used to id the appropriate algorithm.
    string algorithmID;
    
    //Switch Statement
    
    
    // Test case
    algorithmID = "DNA";
    return (0); //std::string (algorithmID::getValueString());
}

int getFileContents(){
    // get the full file path and return the contents
    return(0); //fileContents
}

int chooseAlgorithm(string filePath,string algorithmID){
    
    // Use switch statement to run the appropriate algorithm
    
    switch (algorithmID){
        case "DNA": std::cout << "DNA\n"; break;
            
    }
    
    
    return(0);
}

int main() {
    // Provide text output to welcome and inform the user
    std::cout << "Welcome to Darren's Rosalind Problem Solver!\n";
    std::cout << "This will allow you to use developed algorithms to solve Rosalind Problems.\n";
    std::cout << "The algorithm will be choosen and executed based on the filename,\n";
    std::cout << "which contains the identifier of the problem.\n\n";
    
    //get file path
    char fileLocation[STRSIZ];
    printf("Please enter the problem set path:\n");
    scanf("%s", fileLocation);
    
    getFilePath(fileLocation); //get file path
    // open and get file contents
    
    // id the algorithm to run by filename
    // execute the correct algorithm and return the answer
    // save the answer file
    // output the answer
    exit(EXIT_SUCCESS);
}


// /Users/darren/Desktop/Rosalind_Data_and_Solutions/rosalind_dna.txt
