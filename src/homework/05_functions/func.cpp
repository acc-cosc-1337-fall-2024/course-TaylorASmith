//add include statements
#include "func.h"
#include <algorithm>

double get_gc_content(const std::string& dna) {
 int gc_count = 0;
 for (char nucleotide : dna) {
 if (nucleotide == 'G' || nucleotide == 'C') {
 gc_count++;
 }
 }
 return static_cast<double>(gc_count) / dna.length();
}

std::string get_reverse_string(std::string dna) {
 int n = dna.length();
 for (int i = 0; i < n / 2; i++) {
 std::swap(dna[i], dna[n - i - 1]);
 }
 return dna;
}

std::string get_dna_complement(std::string dna) {
 int n = dna.length();
 for (int i = 0; i < n; i++) {
 if (dna[i] == 'A')
 dna[i] = 'T';
 else if (dna[i] == 'T')
 dna[i] = 'A';
 else if (dna[i] == 'C')
 dna[i] = 'G';
 else if (dna[i] == 'G')
 dna[i] = 'C';
 }
 return dna;
}

//add function code here