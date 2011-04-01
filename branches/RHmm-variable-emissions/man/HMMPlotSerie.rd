\name{HMMPlotSerie}
\alias{HMMPlotSerie}
\title{Plot univariates series in each estimated states}
\description{This function plots the time series in each hidden state.}
\usage{
    HMMPlotSerie(obs, states, dates=NULL, dis="NORMAL", color="green")
    }
\arguments{
    \item{obs}{the vector, list of vectors of observations}
    \item{states}{a ViterbiClass object which gives the hidden states or a vector or a lis of vectors of integer 1 to the number of hidden states}
    \item{dates}{an R object representing dates that can be plot as axis labels (e.g. Date object)} 
    \item{dis}{Distribution name = 'NORMAL', 'DISCRETE', 'MIXTURE'. Default 'NORMAL'.}
    \item{color}{color for the kernel density plot}
}

\value{none}
\note{
 HMMPlotSerie is not implemented for multivariate distributions.\cr

 The time series of observations for each hidden states of the model are plotted using:\cr
    plot(obs[states=i])) and i in 1..max(States)

  }
\examples{
data(n1d_3s)
#Fits an 3 states gaussian model
ResFit <- HMMFit(obs_n1d_3s, nStates=3)
VitPath <- viterbi(ResFit, obs_n1d_3s)
#plot the series
HMMPlotSerie(obs_n1d_3s, VitPath)
}
\seealso{viterbi, plot}
\keyword{htest}
