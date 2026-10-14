#include <iostream>
#include <string>

using namespace std;

class Protein {
private:
  string id;
  string name;
  string sequence;

public:
  void setId(string i) {id=i;}
  void setName(string n) {name=n;}
  void setSequence(string s) {sequence=s;}

  string getId() { return id;}
  string getName() { return name;}
  string getSequence() { return sequence;}

  void describe(){
    cout <<"protein" << name <<" " << sequence << endl;
  }    

  int length(){
    return sequence.length();
  }  
};

class Gene {
private:
  string id;
  string name;
  string chrom;
  string strand;
  int start;
  int end;

public:
  void setId(string i) {id=i;}
  void setName(string n) {name=n;}
  void setChrom(string c) {chrom=c;}
  void setStart(int s) {start=s;}
  void setEnd(int e) {end=e;}
  void setStrand(string s) {strand=s;}


  string getId() { return id;}
  string getName() { return name;}
  string getChrom() { return chrom;}
  int getStart() { return start;}
  int getEnd() { return end;}
  string getStrand() { return strand;}


  void describe(){
    cout <<"gene" << name << "(" << chrom << ":" << start << "-" << end << "," << strand << ")" << endl;
  }
};

int main() {
    Protein p1;
    p1.setName("PTEN");
    p1.setSequence("MTAIIKEIVSRNKRRYQEDGFDLDLTYIYPNIIAMGFPA");

    Protein p2;
    p2.setName("PTAN");
    p2.setSequence("MTAIIKEIVSRNKRRYQEDGFDLDLTYIYPNIIAMGFPS");

    Gene g1;
    g1.setName("BRCA1");
    g1.setChrom("chr17");
    g1.setStart(43044295);
    g1.setEnd(43170245);
    g1.setStrand("+");

    Gene g2;
    g2.setName("BRCA2");
    g2.setChrom("chr18");
    g2.setStart(43044296);
    g2.setEnd(43170246);
    g2.setStrand("-");

    cout << "results" << endl;

    p1.describe();
    cout << "length 1:" << p1.length() << endl;
    p2.describe();
    cout << "length 2:" << p2.length() << endl;

    g1.describe();
    g2.describe();

    return 0;

}
