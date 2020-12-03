//==========================================================================
// This file has been automatically generated for C++ Standalone
// MadGraph5_aMC@NLO v. 2.7.3.py3, 2020-06-28
// By the MadGraph5_aMC@NLO Development Team
// Visit launchpad.net/madgraph5 and amcatnlo.web.cern.ch
// GPU Template
//==========================================================================

#ifndef HelAmps_sm_H
#define HelAmps_sm_H

#define DPCT_USM_LEVEL_NONE
#include <CL/sycl.hpp>
#include <dpct/dpct.hpp>
#include <complex>

using namespace std; 

namespace MG5_sm 
{
SYCL_EXTERNAL void oxxxxx(double p[4], double fmass, int nhel, int nsf,
                          std::complex<double> fo[6]);

void sxxxxx(double p[4], int nss, std::complex<double> sc[3],
            sycl::stream stream_ct1); 

void ixxxxx(double p[4], double fmass, int nhel, int nsf, 
std::complex<double> fi[6]); 

void txxxxx(double p[4], double tmass, int nhel, int nst, 
std::complex<double> fi[18]);

SYCL_EXTERNAL void vxxxxx(double p[4], double vmass, int nhel, int nsv,
                          std::complex<double> v[6]);

SYCL_EXTERNAL void
VVVV3_0(std::complex<double> V1[], const std::complex<double> V2[],
        const std::complex<double> V3[], const std::complex<double> V4[],
        const std::complex<double> COUP, std::complex<double> *vertex);

SYCL_EXTERNAL void VVVV3P0_1(std::complex<double> V2[],
                             const std::complex<double> V3[],
                             const std::complex<double> V4[],
                             const std::complex<double> COUP, const double M1,
                             const double W1, std::complex<double> V1[]);

SYCL_EXTERNAL void
VVVV1_0(std::complex<double> V1[], const std::complex<double> V2[],
        const std::complex<double> V3[], const std::complex<double> V4[],
        const std::complex<double> COUP, std::complex<double> *vertex);

SYCL_EXTERNAL void VVVV1P0_1(std::complex<double> V2[],
                             const std::complex<double> V3[],
                             const std::complex<double> V4[],
                             const std::complex<double> COUP, const double M1,
                             const double W1, std::complex<double> V1[]);

SYCL_EXTERNAL void FFV1_0(std::complex<double> F1[],
                          const std::complex<double> F2[],
                          const std::complex<double> V3[],
                          const std::complex<double> COUP,
                          std::complex<double> *vertex);

SYCL_EXTERNAL void FFV1_1(std::complex<double> F2[],
                          const std::complex<double> V3[],
                          const std::complex<double> COUP, const double M1,
                          const double W1, std::complex<double> F1[]);

SYCL_EXTERNAL void FFV1_2(std::complex<double> F1[],
                          const std::complex<double> V3[],
                          const std::complex<double> COUP, const double M2,
                          const double W2, std::complex<double> F2[]);

SYCL_EXTERNAL void FFV1P0_3(std::complex<double> F1[],
                            const std::complex<double> F2[],
                            const std::complex<double> COUP, const double M3,
                            const double W3, std::complex<double> V3[]);

SYCL_EXTERNAL void
VVVV4_0(std::complex<double> V1[], const std::complex<double> V2[],
        const std::complex<double> V3[], const std::complex<double> V4[],
        const std::complex<double> COUP, std::complex<double> *vertex);

SYCL_EXTERNAL void VVVV4P0_1(std::complex<double> V2[],
                             const std::complex<double> V3[],
                             const std::complex<double> V4[],
                             const std::complex<double> COUP, const double M1,
                             const double W1, std::complex<double> V1[]);

SYCL_EXTERNAL void VVV1_0(std::complex<double> V1[],
                          const std::complex<double> V2[],
                          const std::complex<double> V3[],
                          const std::complex<double> COUP,
                          std::complex<double> *vertex);

SYCL_EXTERNAL void VVV1P0_1(std::complex<double> V2[],
                            const std::complex<double> V3[],
                            const std::complex<double> COUP, const double M1,
                            const double W1, std::complex<double> V1[]);

}  // end namespace MG5_sm

#endif  // HelAmps_sm_H

//==========================================================================
// This file has been automatically generated for C++ Standalone by
// MadGraph5_aMC@NLO v. 2.7.3.py3, 2020-06-28
// By the MadGraph5_aMC@NLO Development Team
// Visit launchpad.net/madgraph5 and amcatnlo.web.cern.ch
//==========================================================================

#ifndef MG5_Sigma_sm_gg_ttxgg_H
#define MG5_Sigma_sm_gg_ttxgg_H

#include <complex> 
#include <vector> 


#include "Parameters_sm.h"

SYCL_EXTERNAL void sigmaKin(double *allmomenta, double *output,
                            sycl::nd_item<3> item_ct1,
                            dpct::accessor<int, dpct::constant, 2> cHel,
                            double *cIPC, double *cIPD);

//==========================================================================
// A class for calculating the matrix elements for
// Process: g g > t t~ g g WEIGHTED<=4 @1
//--------------------------------------------------------------------------

class CPPProcess
{
  public:

    CPPProcess(int numiterations, int gpublocks, int gputhreads, 
    bool verbose = false, bool debug = false); 

    ~CPPProcess(); 

    // Initialize process.
    virtual void initProc(std::string param_card_name); 


    virtual int code() const {return 1;}

    const std::vector<double> &getMasses() const; 

    void setInitial(int inid1, int inid2) 
    {
      id1 = inid1; 
      id2 = inid2; 
    }

    int getDim() const {return dim;}

    int getNIOParticles() const {return nexternal;}


    // Constants for array limits
    static const int ninitial = 2; 
    static const int nexternal = 6; 
    static const int nprocesses = 1; 

  private:
    int m_numiterations; 
    // gpu variables
    int gpu_nblocks; 
    int gpu_nthreads; 
    int dim;  // gpu_nblocks * gpu_nthreads;

    // print verbose info
    bool m_verbose; 

    // print debug info
    bool m_debug; 

    static const int nwavefuncs = 6; 
    static const int namplitudes = 159; 
    static const int ncomb = 64; 
    static const int wrows = 63; 
    // static const int nioparticles = 6;

    std::complex<double> * * amp; 


    // Pointer to the model parameters
    Parameters_sm * pars; 

    // vector with external particle masses
    std::vector<double> mME; 

    // Initial particle ids
    int id1, id2; 

}; 


#endif  // MG5_Sigma_sm_gg_ttxgg_H
