% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/data_preprocess.R
\name{x2y_df2list}
\alias{x2y_df2list}
\title{convert x-y associations}
\usage{
x2y_df2list(x2ydf, xcol = 1, ycol = 2)
}
\arguments{
\item{x2ydf}{data.frame of x-y associations}

\item{xcol}{col of x in x2ydf}

\item{ycol}{col of y in x2ydf}
}
\value{
a list of x-y associations
}
\description{
concert x-y associations (e.g. disease-gene associations) from data.frame 
to list
}
\examples{
options(stringsAsFactors = FALSE)

d2g_fundo_sample<-read.table(text = "DOID:5218    IL6
DOID:8649  EGFR
DOID:8649	PTGS2
DOID:8649	VHL
DOID:8649	ERBB2
DOID:8649	PDCD1
DOID:8649	KLRC1
DOID:5214	MPZ
DOID:5214	EGR2
DOID:5210	AMH")

d2g_fundo_list<-x2y_df2list(d2g_fundo_sample)
}
\author{
Peng Ni, Min Li
}

