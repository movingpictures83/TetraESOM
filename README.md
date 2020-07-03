# TetraESOM
# Language: C++
# Input: DIR
# Output: Prefix
# Tested with: PluMA 1.1, GCC 4.8.4

PluMA plugin to compute Tetramer frequencies, which can later work as input to ESOM (Dick, 2009).

This plugin wraps the "tetramerFreqs" software package, available here:
https://github.com/tetramerfreqs/binning

Source code for this package has been included in the directory "Binning",
and is under the GNU Public License.  A copy can be found in Binning/COPYRIGHT.
This source code has been slightly modified.  Two changes:
1. No error for if the output directory exists 
2. Modified to accept an output prefix for tetramer counts

TetraESOM takes as input the directory for FASTA files (assumed to end in .fasta)
and an output prefix for the tetramer counts.
