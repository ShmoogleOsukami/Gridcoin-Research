#pragma once

#include "neuralnet.h"

namespace NN
{
    //!
    //! \brief NeuralNet stub implementation.
    //!
    //! A neuralnet implementation which does nothing.
    //!
    class NeuralNetStub : public INeuralNet
    {
    private:
        // Documentation in interface.
        bool IsEnabled();
        std::string GetNeuralVersion();
        std::string GetNeuralHash();
        std::string GetNeuralContract();
        bool SynchronizeDPOR(const BeaconConsensus& beacons);
        std::string ExplainMagnitude(const std::string& data);
        int64_t IsNeuralNet();
    };
}
