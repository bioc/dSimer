% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/Plots.R
\name{plot_bipartite}
\alias{plot_bipartite}
\title{plot disease-gene (or GO term etc.) associations as a bipartite graph}
\usage{
plot_bipartite(xylist, vertex.size = 12, vertex.shape1 = "circle",
  vertex.shape2 = "square", vertex.color1 = "darkseagreen",
  vertex.color2 = "turquoise1", vertex.label.font = 2,
  vertex.label.dist = 0, vertex.label.color = "black",
  vertex.label.cex = 0.8, edge.color = "black",
  layout = layout.kamada.kawai)
}
\arguments{
\item{xylist}{a named list object which names are diseases and each element of the
list is a gene set with respect to each disease.}

\item{vertex.size}{vertex size}

\item{vertex.shape1}{shape for one kind of vertex}

\item{vertex.shape2}{shape for another kind of vertex}

\item{vertex.color1}{color for one kind of vertex}

\item{vertex.color2}{color for another kind of vertex}

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
plot a bipartite graph which visualizes associations between diseases and genes 
(or GO terms etc.)
}
\examples{
data(d2g_fundo_symbol)
d2g_sample<-sample(d2g_fundo_symbol, 3)
plot_bipartite(d2g_sample)
}
\author{
Peng Ni, Min Li
}

