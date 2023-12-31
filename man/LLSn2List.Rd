% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/data_preprocess.R
\name{LLSn2List}
\alias{LLSn2List}
\title{convert data.frame of HumanNet log-likelihood Score to list}
\usage{
LLSn2List(LLSn)
}
\arguments{
\item{LLSn}{data.frame of gene-gene normalized log-likelihood score in 
HumanNet}
}
\value{
a list of normalized log-likelihood score
}
\description{
convert HumanNet normalized log-likelihood score from data.frame to list,
 which will be used in FunSim method
}
\examples{
## see examples in function FunSim
data(HumanNet_sample)
llsnlist<-LLSn2List(HumanNet_sample[1:100,])
llsnlist
}
\author{
Peng Ni, Min Li
}
\references{
Cheng L, Li J, Ju P, et al. SemFunSim: a new method for measuring 
disease similarity by integrating semantic and gene functional association[J]. 
PloS one, 2014, 9(6): e99415.
}
\seealso{
\code{\link{FunSim}}
}

