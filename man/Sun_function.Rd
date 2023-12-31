% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/Sun.R
\name{Sun_function}
\alias{Sun_function}
\title{Sun's function measure of disease similarity calculating}
\usage{
Sun_function(D1, D2, d2go)
}
\arguments{
\item{D1}{a vector consists disease ids}

\item{D2}{another vector consists disease ids}

\item{d2go}{a list of disease-go term associations}
}
\value{
a matrix of disease disease simialrity
which rownames is D1 and colnames is D2
}
\description{
given two vectors of diseases and a list of disease-go term associations,
this function will calculate disease similarity by method Sun_function
}
\examples{
## get a sample of disease-GO associations
data(d2go_sample)

##### the entire disease-GO associations can be obtained by follows:
## go2g<-get_GOterm2GeneAssos(GOONTOLOGY = "BP", geneid="SYMBOL") #get go-gene associations
## data(d2g_fundo_symbol)
## d2go<-HypergeometricTest(d2g = d2g_fundo_symbol,go2g = go2g)
##### ###################################################

ds<-names(d2go_sample)
Sun_function(ds,ds,d2go_sample)
}
\author{
Peng Ni, Min Li
}
\references{
Sun K, Goncalves JP, Larminie C. Predicting disease associations 
via biological network analysis[J]. BMC bioinformatics, 2014, 15(1): 304.
}
\seealso{
\code{\link{get_GOterm2GeneAssos}}, \code{\link{HypergeometricTest}}
}

