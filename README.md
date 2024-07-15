# testArbitraryPrecise

As a part of a project on improving the R package `CompQuadForm` with unlimited precision, this package contains simple codes to make sure we can do all the necessary calculations with arbitrary precision before implementing the libraries to the orginal package. Specifically, after trying out and looking at various libraries and packages for arbitrary precision, we think either the MPFR library (original for C, with available C++ wrapper mpreal) or the Boost/Multiprecision (C++ library) will be most suitable for our project.

Since I only recently learned C/C++ and this is my first R package, there are much I'm not yet aware of that might be causing the errors I get so far. Thus, I appreciate all support on these topics:

- Attaching `MPFR` libraries or "boost/multiprecision/mpfr.hpp" to the package and conducting various mathematical operations on `mpfr` type numbers such as multiplication, pow, exp, sin, atan, etc. In this testing package, I currently do not have a `Makevars.in` file, but I have tried to attach direct paths to the `MPFR` in another practice package, and still yield the same error<img width="840" alt="mpfrError" src="https://github.com/user-attachments/assets/48d8e3b0-5d76-4003-8d36-5e9eaca3a56b">

- How to attain/retrieve arbitrary precise inputs from R, ie. 0.1 in R is not precise beyond the 15th digits. Thus, even if our function can calculate arbitrarily precise, initializing an unlimited precise number when the input is imprecise will yield incorrect result. *Note:* MATLAB has a `sym` function where the software approximates the exact symbolic representation of the floating point to correct the round-off error, I wonder if there are any similar functions in any libraries in R or C/C++ so that we can retain more precision when interfacing from R to C++.

- Whether Boost or MPFR will be most suitable for our package?

<h2 id="about-the-package"> 📌 About The Package</h2>

`CompQuadForm` was first introduced in “Computing the distribution of quadratic forms: Further comparisons between the Liu-Tang-Zhang approximation and exact methods” by Duchesne and Micheaux in *Computational Statistics and Data Analysis* (2010). *CompQuadForm* includes four different methods of identifying quadratic forms in central (non-central) normal variables with Farebrother (1984) for the exact algorithms, Imhof (1961) and Davies (1973, 1980) for a method using numerical characteristic function inversion formula, and Liu-Tang-Zhang (2009) with the simpler four-moment chi-square approximation. Pierre Lafaye de Micheaux developed and the latest version of the package is v.1.4.3, 2017/04/10.
