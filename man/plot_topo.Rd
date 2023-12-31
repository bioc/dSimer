% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/Plots.R
\name{plot_topo}
\alias{plot_topo}
\title{plot topological relationship of two gene sets}
\usage{
plot_topo(geneset1, geneset2, graph, vertexcolor = c("tomato", "orange",
  "lightsteelblue"), vertex.shape = "circle", vertex.size = 14,
  vertex.label.font = 1, vertex.label.dist = 0,
  vertex.label.color = "black", vertex.label.cex = 0.5,
  edge.color = "black", layout = layout.auto)
}
\arguments{
\item{geneset1}{a character vector contains gene ids}

\item{geneset2}{another character vector contains gene ids}

\item{graph}{an igraph graph object which represents a gene network}

\item{vertexcolor}{a character vector contains 3 colors for vertexs}

\item{vertex.shape}{vertex shape}

\item{vertex.size}{vertex size}

\item{vertex.label.font}{label text font}

\item{vertex.label.dist}{label text dist}

\item{vertex.label.color}{label text color}

\item{vertex.label.cex}{label text cex}

\item{edge.color}{edge color}

\item{layout}{layout}
}
\value{
an igraph plot object
}
\description{
plot topological relationship of two gene sets (which are associated 
with two diseases respectively).
}
\examples{
data("PPI_HPRD")
g<-graph.data.frame(PPI_HPRD,directed = FALSE) #get an igraph graph 

data(d2g_fundo_symbol)
a<-d2g_fundo_symbol[["DOID:8242"]] # get gene set a
b<-d2g_fundo_symbol[["DOID:4914"]] # get gene set b

plot_topo(a,b,g)
}
\author{
Peng Ni, Min Li
}

