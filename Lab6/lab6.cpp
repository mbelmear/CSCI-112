#include<iostream>
#include<algorithm>
#include<string>
#include<fstream>
#include<vector>
using namespace std;

//Michael Belmear
//CSCI 112 Lab6
//11/14/2022

class Term;//term object declaration

class Polynomial{//polynomial definition/declaration
    private:
    vector<Term> terms;//declaring our vector of type Term to be privately used
    public:
    void simplify();//declaring our different object methods
    void read();
    void printterms();
};

class Term{//term definition
    private:
    int coeff;//coefficient variable to keep track of each terms coefficient
    int exp;//exponent variable to keep track of each terms exponent
    public:
    Term(string);//calling our contructor
    Term() {coeff = 0; exp = 0;}//setting the  value of each exp and coeff to be 0 initially
    void print();//declaring our different object methods
    int get_exp() {return exp;}//getters and setters for each exponent and coefficient 
    void set_exp(int e) {exp = e;}
    int get_coeff() {return coeff;}
    void set_coeff(int n) {coeff = n;}
};

void Term::print(){//print method to print out each exponent and coefficient in the proper order
    if(coeff != 1){//formatting to print out only the exponents and coefficients that we need
        cout << coeff;
    }
    if(exp != 0){
        cout << "x";
        if(exp != 1){
            cout << exp;
        }
    }
}

Term::Term(string input){//term contructor that takes in our redirected input file 
    if(input.at(0) != 'x'){//logic for the different cases to set our coefficients and exponents accordingly within our term object 
        coeff = (int)(input.at(0) - '0');
        if(input.length() == 1){
            exp = 0;
        }else if(input.length() == 2){
            exp = 1;
        }else{
            exp = (int)(input.at(2) - '0');
        }
    }else if(input.length() == 1){
        coeff = 1;
        exp = 1;
    }else{
        coeff = 1;
        exp = (int)(input.at(1) - '0');
    }
}

void Polynomial::printterms(){//print method to print the simplified function in order and with proper formatting
    for(unsigned int i = 0; i < terms.size(); i++){
        terms[i].print();
        if (i != terms.size()-1){
            cout << " + ";
        }
    }
    cout << endl;
}

void Polynomial::read(){//read method to get each term within our function that we read in as a string and pushing each term into our vector of terms
    string str;    
    bool done = false;
    while(!done){
        cin >> str;
        done = feof(stdin);
        if (!done && str != "+") {
            Term t1(str);
            terms.push_back(t1);
        }
    }

}

bool compare(Term t1, Term t2){//ordering each term according to each exponent's value
    return t1.get_exp() > t2.get_exp();
}

void Polynomial::simplify(){//method to simplify our function 
    sort(terms.begin(), terms.end(), compare);//sorting each term and calling our compare function for ordering
    for(unsigned int i = 0; i < terms.size() - 1; i++){//logic to iterate through each term and simplify like terms 
        unsigned int next = i + 1;
        while(next != terms.size() && terms[i].get_exp() == terms[next].get_exp()){
            int sum = terms[i].get_coeff() + terms[next].get_coeff();
            terms[i].set_coeff(sum);
            terms.erase(terms.begin() + next);
        }
    }
}

int main(void){ //main function 
    Polynomial poly;//calling all of our methods on polynomial which interact with both of our objects
    poly.read();
    poly.simplify();
    poly.printterms();
    return 0;//letting the compiler know that we have compiled successfully 
}
