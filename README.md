# testArbitraryPrecise

This package contains simple codes to make sure all the necessary calculations work with arbitrary precision before implementing the libraries to `CompQuadForm`. Specifically, after trying out and looking at various libraries and packages for arbitrary precision, we think either the MPFR library (original for C, with available C++ wrapper mpreal) or the Boost/Multiprecision (C++ library) will be most suitable for our project. 

***

Currently, the `expBoost.cpp` file works well and when I build the package with only that function, the function computes accurately for all integers (compared with WolframAlpha), but `expMPFR.cpp` and `expBoostMPFR.cpp` yield error. 

Since I only recently learned C/C++ and this is my first R package, there are much I'm not yet aware of that might be causing the errors I get so far. Thus, I **appreciate all support/contribution on these topics**:

- Attaching MPFR libraries or "boost/multiprecision/mpfr.hpp" to the package and conducting various mathematical operations on `mpfr` type numbers such as multiplication, pow, exp, sin, atan, etc. In this testing package, I currently do not have a `Makevars.in` file, but when I previously tried adding it, I yield the same error below.
<img width="840" alt="mpfrError" src="https://github.com/user-attachments/assets/48d8e3b0-5d76-4003-8d36-5e9eaca3a56b">

- How to attain/retrieve arbitrary precise inputs from R, ie. 0.1 in R is not precise beyond the 15th digits. Thus, even if our function can calculate arbitrarily precise, initializing an unlimited precise number when the input is imprecise will yield incorrect result. *Note: MATLAB has a `sym` function where the software approximates the exact symbolic representation of the floating point to correct the round-off error, I wonder if there are any similar functions in any libraries in R or C/C++ so that we can retain more precision when interfacing from R to C++.*

- Whether Boost or MPFR will be most suitable for our package?

<h2 id="about-the-package"> 📌 About The Package</h2>

`CompQuadForm` was first introduced in “Computing the distribution of quadratic forms: Further comparisons between the Liu-Tang-Zhang approximation and exact methods” by Duchesne and Micheaux in *Computational Statistics and Data Analysis* (2010). *CompQuadForm* includes four different methods of identifying quadratic forms in central (non-central) normal variables with Farebrother (1984) for the exact algorithms, Imhof (1961) and Davies (1973, 1980) for a method using numerical characteristic function inversion formula, and Liu-Tang-Zhang (2009) with the simpler four-moment chi-square approximation. Pierre Lafaye de Micheaux developed and the latest version of the package is v.1.4.3, 2017/04/10.
